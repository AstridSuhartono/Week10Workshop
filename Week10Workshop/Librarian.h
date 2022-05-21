#pragma once
class Librarian
{ 

 public:
        boolean Login();
        boolean Logout();
    
    protected:
        Librarian* _librarianID;
        Library* _branchNumber;
        std::string _Name;  
}; 
