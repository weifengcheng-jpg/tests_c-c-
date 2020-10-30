#include <iostream>
#include "/usr/include/mysql/mysql.h" 

int main() {
    MYSQL mysql; //数据库句柄
    MYSQL_RES* res; //查询结果集
    MYSQL_ROW row; //记录结构体

    //初始化数据库
    mysql_init(&mysql);

    //设置字符编码
    mysql_options(&mysql, MYSQL_SET_CHARSET_NAME, "gbk");

    //连接数据库
    if (mysql_real_connect(&mysql, "127.0.0.1", "root", "wei12345",
                        "mysql_test", 3306, NULL, 0) == NULL) {
        std::cout << "错误原因: " << mysql_error(&mysql) << std::endl;
        std::cout << "连接失败! \n" << std::endl;
        exit(-1);
    }

   //查询数据
   int ret = mysql_query(&mysql, "select * from class1;");
   std::cout << "ret: " << ret;

   //获取结果集
   res = mysql_store_result(&mysql);

   //给ROW赋值, 判断ROW是否为空, 不为空就打印数据.
   while ( !!(row = mysql_fetch_row(res)) ) {
       std::cout << " " << row[0] << " " << row[1] << " " << row[2] << " " << row[3];
   }

   //释放结果集
   mysql_free_result(res);

   //关闭数据库
   mysql_close(&mysql);


    std::cout << "Hello world" << std::endl;
    return 0;
}

