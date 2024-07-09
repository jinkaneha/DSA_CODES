class Solution {
public:
    int passThePillow(int n, int time) {
        
        int ans=1;
        int rev=false;
        while(time--)
        {
            if(!rev)
            {
                
                ans++;
                cout<<"time "<<time<<" " <<ans<<" "<<endl;
                

            }
            else
            {
                
                ans--;
                  cout<<"time "<<time<<" " <<ans<<" "<<endl;
                
            }
            
            if(ans%n==0 || ans==1) rev=!rev;
           
        }
        return ans;
    }
};