class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
   string real1="",im1="",real2="",im2="";
    stringstream ss(num1);
    
    getline(ss,real1,'+');
    getline(ss,im1,'+');
    
    stringstream ss2(num2);
    
    getline(ss2,real2,'+');
    getline(ss2,im2,'+');
    
    im1.pop_back();
    im2.pop_back();
    
    int a1=stoi(real1);
    int b1=stoi(im1);
    int a2=stoi(real2);
    int b2=stoi(im2);
    
    int r=(a1*a2)-(b1*b2);
    int img=(a1*b2)+(a2*b1);
    
    
    return to_string(r)+"+"+to_string(img)+"i";
    }
};