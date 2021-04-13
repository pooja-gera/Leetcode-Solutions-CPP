class Solution {
public:
    string defangIPaddr(string address) {
        unsigned inputSize = address.size();
        string defangedAddress("");
        defangedAddress.resize(inputSize+6);
        int j=0; //counter for output string 
        for(int i=0;i<inputSize;i++){
            if(address[i]!='.'){
                defangedAddress[j]=address[i];
                j++;
            }
            else{
                defangedAddress[j]='[';
                j++;
                defangedAddress[j]='.';
                j++;
                defangedAddress[j]=']';
                j++;
            }
        }
        return defangedAddress;
    }
};
