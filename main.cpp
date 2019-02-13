//
//  main.cpp
//  Lab2
//
//  Created by Taylor Bui on 9/12/18.
// 
//
//(c) 2018 Taylor Bui. All rights reserved.
//

#include <iostream>
#include<string>
using namespace std;

int bin2Octal(const string binaryString)
{
    
    int size = binaryString.size();
    cout << size << endl;
    string store[9];
  
    if(size == 8)
    {
        store[0] = "0";
        for(int i = 1; i < 9; i++)
        {
            store[i] = binaryString.substr(i-1,1);
        }
    }else
        if(size == 7)
           {
               store[0] = "0";
               store[1] = "0";
               for(int i = 2; i < 9; i++)
               {
                   store[i] = binaryString.substr(i-2,1);
               }
           }else
               if(size == 6)
               {
                   for(int i = 0; i < 9; i++)
                   {
                       if((9-size) > i)
                       {
                           store[i] = "0";
                       }else
                           store[i] = binaryString.substr(i-3,1);
                   }
               }else
                   if(size == 5)
                   {
                       for(int i = 0; i < 9; i++)
                       {
                           if((9-size) > i)
                           {
                               store[i] = "0";
                           }else
                               store[i] = binaryString.substr(i-4,1);
                       }
                   }else
                  if(size == 4)
                  {
                      for(int i = 0; i < 9; i++)
                      {
                          if((9-size) > i)
                          {
                              store[i] = "0";
                          }else
                              store[i] = binaryString.substr(i-5,1);
                      }
                  }else
                          if(size == 3)
                          {
                              for(int i = 0; i < 9; i++)
                              {
                                  if((9-size) > i)
                                  {
                                      store[i] = "0";
                                  }else
                                      store[i] = binaryString.substr(i-6,1);
                              }
                          }else
                              if(size == 2)
                              {
                                  for(int i = 0; i < 9; i++)
                                  {
                                      if((9-size) > i)
                                      {
                                          store[i] = "0";
                                      }else
                                          store[i] = binaryString.substr(i-7,1);
                                  }
                              }else
                                  if(size == 1)
                                  {
                                      for(int i = 0; i < 9; i++)
                                      {
                                          if((9-size) > i)
                                          {
                                              store[i] = "0";
                                          }else
                                              store[i] = binaryString.substr(i-8,1);
                                      }
                                  }else
                                          for(int i= 0; i < 9 ; i++)
                                              {
                                                store[i] = binaryString.substr(i,1);
                                              }
    
    int num1 = stoi(store[0])*4 + stoi(store[1])*2 + stoi(store[2]);
    int num2 = stoi(store[3])*4 + stoi(store[4])*2 + stoi(store[5]);
    int num3 = stoi(store[6])*4 + stoi(store[7])*2 + stoi(store[8]);
    int total = num1*100 + num2*10 + num3;
    
    cout << "total is : " << total << endl;

    return total;
}

string Octal2Binary(const int  &  octalNumber)
{
    string binaryString = to_string(octalNumber);
    int size = binaryString.size();
    cout << size << endl;
    string store[9];
    if(size == 8)
    {
        store[0] = "0";
        for(int i = 1; i < 9; i++)
        {
            store[i] = binaryString.substr(i-1,1);
        }
    }else
        if(size == 7)
        {
            store[0] = "0";
            store[1] = "0";
            for(int i = 2; i < 9; i++)
            {
                store[i] = binaryString.substr(i-2,1);
            }
        }else
            if(size == 6)
            {
                for(int i = 0; i < 9; i++)
                {
                    if((9-size) > i)
                    {
                        store[i] = "0";
                    }else
                        store[i] = binaryString.substr(i-3,1);
                }
            }else
                if(size == 5)
                {
                    for(int i = 0; i < 9; i++)
                    {
                        if((9-size) > i)
                        {
                            store[i] = "0";
                        }else
                            store[i] = binaryString.substr(i-4,1);
                    }
                }else
                    if(size == 4)
                    {
                        for(int i = 0; i < 9; i++)
                        {
                            if((9-size) > i)
                            {
                                store[i] = "0";
                            }else
                                store[i] = binaryString.substr(i-5,1);
                        }
                    }else
                        if(size == 3)
                        {
                            for(int i = 0; i < 9; i++)
                            {
                                if((9-size) > i)
                                {
                                    store[i] = "0";
                                }else
                                    store[i] = binaryString.substr(i-6,1);
                            }
                        }else
                            if(size == 2)
                            {
                                for(int i = 0; i < 9; i++)
                                {
                                    if((9-size) > i)
                                    {
                                        store[i] = "0";
                                    }else
                                        store[i] = binaryString.substr(i-7,1);
                                }
                            }else
                                if(size == 1)
                                {
                                    for(int i = 0; i < 9; i++)
                                    {
                                        if((9-size) > i)
                                        {
                                            store[i] = "0";
                                        }else
                                            store[i] = binaryString.substr(i-8,1);
                                    }
                                }else
                                    for(int i= 0; i < 9 ; i++)
                                    {
                                        store[i] = binaryString.substr(i,1);
                                    }
    for(int i = 0; i< 9; i++)
    {
        if (store[i]== "7")
        {
            store[i] = "111";
        }else
            if (store[i]== "6")
            {
                store[i] = "110";
            }else
                if (store[i]== "5")
                {
                    store[i] = "101";
                }else
                    if (store[i]== "4")
                    {
                        store[i] = "100";
                    }else
                        if (store[i]== "3")
                        {
                            store[i] = "011";
                        }else
                            if (store[i]== "2")
                            {
                                store[i] = "010";
                            }else
                                if (store[i]== "1")
                                {
                                    store[i] = "001";
                                }else
                                    if(store[i]=="0")
                                    {
                                        store[i] = "000";
                                    }
    }
    
    string s = store[0] + store[1] + store[2] + store[3] + store[4] + store[5] + store[6];
    long convert = stol(s);
    cout << convert;
    s = to_string(convert);
    return s + store[7] + store[8];
}

int main(int argc, const char * argv[])
{
    string num;
    int octalCon, decimal;
    cout << "Enter a binary number to convert to octal: ";
    cin >>  num;
    octalCon = bin2Octal(num);
    num = to_string(octalCon);
    
    cout << "Octal is:  " << num << endl;
    
    cout << " Enter a octal number to convert to binary: ";
    cin >> decimal;
    num = Octal2Binary(decimal);
    cout << "The binary string is : " << num;

    return 0;
}

