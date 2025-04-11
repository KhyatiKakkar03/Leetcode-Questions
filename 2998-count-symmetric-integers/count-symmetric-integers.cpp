class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++)
        {
            string num=to_string(i);
            if(num.size()%2!=0)
            continue;
            int a=0,b=0;
            for(int j=0;j<num.size()/2;j++)
            {
                a+=num[j];
            }
            for(int j=(num.size()/2);j<num.size();j++)
            {
                b+=num[j];
            }
            if(a==b)count++;
        }
        return count;
    }
};