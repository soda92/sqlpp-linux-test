#include <mysql++/mysql++.h>
#include <mysql++/ssqls.h>

// The following is calling a very complex macro which will create
// "struct stock", which has the member variables:
//
//   sql_char item;
//   ...
//   sql_mediumtext_null description;
//
// plus methods to help populate the class from a MySQL row.  See the
// SSQLS sections in the user manual for further details.
sql_create_6(stock,
             1, 6, // The meaning of these values is covered in the user manual
             mysqlpp::sql_char, item,
             mysqlpp::sql_bigint, num,
             mysqlpp::sql_double, weight,
             mysqlpp::sql_double_null, price,
             mysqlpp::sql_date, sDate, // SSQLS isn't case-sensitive!
             mysqlpp::sql_mediumtext_null, description)

int main(){
      stock row("Hot Dogs", 100, 1.5,
                std::numeric_limits<double>::infinity(), // "priceless," ha!
                mysqlpp::sql_date("1998-09-25"), mysqlpp::null);
      return 0;
}