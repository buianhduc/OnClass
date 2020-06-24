/*Test code:chương trình chạy trên console, viết theo ngôn ngữ mà bạn muốn, 
đề: cho chương trình xuất ra một số random từ 1->10 (không hiển thị), 
người dùng nhập đoán là số bao nhiêu, nếu người dùng nhập số lớn hơn số mà chương trình xuất ra thì phải hiển thị ra câu 
"Sai! số random bé hơn [số người dùng đã nhập]" và nếu số người dùng nhập bé hơn thì console phải hiển thị 
"Sai! số random lớn hơn [số người dùng đã nhập]". Số lần tối đa đoán sai là 3, nếu đoán sai quá 3 thì console sẽ hiển thị: 
"Bạn đã thua! số đúng là [số đúng chương trình đã xuất ra]", còn nếu người dùng đoán đúng kịp thì sẽ hiển thị 
"Bạn đã thắng! số đúng là [số đúng chương trình đã xuất ra]" và kết thúc chương trình. */

#include <iostream>
#include <ctime>
#include <random>

using namespace std;

const int gLARGER = 1;
const int gSMALLER = 2;
const int gEQUALS = 3;

int checkNumber(int userInp, int answer)
{
    //compare user input and answer
    if(userInp < answer)
    {
        return gLARGER;
    }
    else if(userInp > answer)
    {
        return gSMALLER;
    }
    return gEQUALS;
}

int main()
{   
    //define variables
    int userInp,count = 0;
    //make sure the number is randomly generated each time
    srand(time(NULL));
    //get random number
    const int answer = rand() % (10-1+1) +1;
    
    // get user input
    cout<<"Nhap so: ";
    cin>>userInp;
    //check number
    while(checkNumber(userInp,answer) != gEQUALS and count <= 3)
    {
        switch(checkNumber(userInp,answer))
        {
            case gLARGER:
                cout<<"Sai! số random lớn hơn "<<userInp<<endl;
                cout<<"Xin nhập lại: ";
                cin>>userInp;
                break;
            case gSMALLER:
                cout<<"Sai! số random nhỏ hơn "<<userInp<<endl;
                cout<<"Xin nhập lại: ";
                cin>>userInp;
                break;
        }
        count++;
    }
    //check if user wins or loses
    if(count > 3){
        //if user loses
        cout<<"Bạn đã thua! số đúng là "<<answer;
    }
    else
    {
        //if user wins
        cout<<"Bạn đã thắng! số đúng là "<<answer;
    }

}
