#include <stdio.h>
#include <stdlib.h>
#include "/usr/local/include/google/protobuf"
 
void main()
{
        // 定义一个Person元素，并往其中存入数据
        Person person = PERSON__INIT;
        person.id = 1314;
        person.name = "lily";  // 字符串 lily 位于常量区
 
        printf("id = %d\n", person.id);
        printf("name = %s\n", person.name);
 
        // 打包
        int len = person__get_packed_size(&person);
        //printf("len = %d\n", len);
        void *sendpack = malloc(len);
        person__pack(&person, sendpack);
         // sendpack是打好的包，可以通过socket通讯将其发送出去。
        //（这里主要讲protobuf，就不发送了）
 
        // 接收端解包
        Person *recvbuf = person__unpack(NULL, len, sendpack);
        printf("id = %d\n", recvbuf->id);
        printf("name = %s\n", recvbuf->name);
        // 包用完了要释放
        person__free_unpacked(recvbuf, NULL);
        free(sendpack);
}



