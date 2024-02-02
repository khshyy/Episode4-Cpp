#include "Header_VectorFunction.hpp"

void add_elements_list(const std::vector < int > program_input, std::vector < int >& new_list);
void ocurrences(std::string user_input, const std::vector <std::string> char_list);

int main( void ){

    std::vector < int > old_list {1,2,3,4};

    std::vector < int > new_list_main;

    std::vector < std::string > string_list { "Gaben", "Paris", "Paris", "Gaben", "Valve", "Chile", "Santiago", "Peru"};

    add_elements_list( old_list,new_list_main );

    for( auto& iteration : new_list_main ){

        std::cout << iteration << "\n";
    }

    std::string user_stringInput;

    std::cout << "-String Input: ";
    std::cin >> user_stringInput;

    ocurrences(user_stringInput, string_list);
}

void add_elements_list(const std::vector < int > program_input, std::vector < int >& new_list){

    for( auto& iter_list : program_input ){
        new_list.push_back(iter_list);
    }

}

void ocurrences(std::string user_input, const std::vector <std::string> char_list){

    int cont {};
    
    for( auto& based: char_list){
        if(user_input == based){
            cont++;
        }
    }

    if(cont >= 1){
      std::cout << "Ocurrences = " << cont << "\n";
    }else{
        std::cout << "No Ocurrences! on the list " << "\n";
    }
}