#include <iostream>
using namespace std;

int main(){
    char str[20];
    char substr[4];
    int i = 0;
    int maxI = 0;
    char maxChar= 0;
    char output[25];
    int j = 0;
    while(cin >> str >> substr){
        while (str[i] != '\0'){
            if(maxChar < str[i]){
                maxI = i;
                maxChar = str[i];
            }
            i++;
        }

        for (int j = 0; j <= maxI; j++){
            output[j] = str[j];
        }

        for(int j = 0; j < 3; j++){
            output[maxI+j+1] = substr[j];
        }
        while(str[maxI+j+1] != '\0'){
            output[maxI+3+j+1] = str[maxI + j + 1];
            j++;
        }
        j = 0;
        while(output[j] != '\0'){
            cout << output[j];
            j++;
        }
        cout << endl;
        int abc = 0;
        while(str[abc]!='\0'){
            str[abc] = '\0';
            abc++;
        }
        abc = 0;
        while(substr[abc]!='\0'){
            substr[abc] = '\0';
            abc++;
        }
        i = 0;
        maxI = 0;
        maxChar= 0;

        abc = 0;
        while(output[abc]!='\0'){
            output[abc] = '\0';
            abc++;
        }
        j = 0;

    }
    return 0;

}