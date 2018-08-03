/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////


class Solution {
    bool diff(string a,string b){
        int c=0;
        for(int i=0;i<a.size();i++)
            if(a[i]!=b[i]) c++;
        if(c==1) return true;
        return false;
    }

public:

    int ladderLength(string start,string end,unordered_set<string> &dict){
       dict.insert(end);
       dict.erase(start);
       queue<string> q;
       q.push(start);
       int length=0;
       while(q.size()>0){    
           length++;
           int QueueLength=q.size();
           for(int i=0;i<QueueLength;i++){  
               start=q.front();
               q.pop();
               if(start==end) return length;
               for(unordered_set<string >::iterator iter=dict.begin();iter!= dict.end();){  
                   if(diff(start,*iter)){
                       q.push(*iter);
                       dict.erase(iter++);
                   }else iter++;
               }
           }
            }
       return 0;
   }
    
    int ladderLength2(string start, string ends, unordered_set<string> &dict) {
        int res=1;
        queue<string> q;
        q.push(start);
        while(!q.empty()){
            int size=q.size();
            while(size>0){
                string top=q.front();
                q.pop();
                size--;
                if(diff(top,ends)) return res+1;
                for(unordered_set<string >::iterator i =dict.begin();i!=dict.end();){
                    if(diff(*i,top)){
                        q.push(*i);
                        dict.erase(i++);
                    }else i++;
                }
            }
            res++;
        }
        return 0;
    }
};