// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum class item_purpose {worship, dairy, wash, pet};     // enum in c++ is a strongly-typed class, meaning enum definition is scope-dependent (encapsulated within a class scope)

enum class item_kind {dairy, shop, garage}; //if declared as 'enum', compiler throws error for 'Dairy' ducplication. If declared as 'enum class', no error- Use of scope operator.

int main(){
    int dairy = 8;   //'dairy' here is locally defined, so in below stmt, a will take 8 value. Local values are preferred over Global.
 //   int a;
  //a = dairy;
    item_purpose a = item_purpose::dairy;      //Use of scope-resolution operator, if the enum is defined as 'enum class', else not needed.

    item_kind b = item_kind:: dairy;
 //   a = dairy;       // 'dairy' here refers to the index of dairy in globally defined item_purpose enum, when 'int dairy' is not defined above. thus will return 1

    std::cout << "a = " << int(a) << std::endl;     //since a denotes index, typecasting is needed
    std::cout << "b = " << int(b) << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
