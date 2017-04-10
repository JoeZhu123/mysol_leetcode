//
//  Created by xingezhu on 17/3/29.
//  Copyright © 2017年 xingezhu. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
/***********************************/
class Solution {
public:
    string reverseWords(string s) {
        string result;

        char *p=(char*)s.c_str();
        char *tokenPtr=strtok(p, " ");
        while(tokenPtr != NULL)
        {
            cout<<tokenPtr<<endl;
            cout<<strlen(tokenPtr)<<endl;
            for (int i=strlen(tokenPtr)-1; i>=0; i--) {
                result.push_back(tokenPtr[i]);
            }
            if (result.length()<s.length())
                result.push_back(' ');
            tokenPtr = strtok( NULL, " ");
        }
        
        return result;
    }
    
};


/**********************************{{{ main*/
int main(int argc, char *argv[])
{
    Solution sol1;
    string test="Let's take LeetCode contest";
    cout<<test.find(" ")<<endl;
    cout<<sol1.reverseWords(test)<<endl;
    return 0;
}
/**********************************}}}*/
