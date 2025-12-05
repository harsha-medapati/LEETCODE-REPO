class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        deque<int>st;
        stack<int>sa;
        reverse(sandwiches.begin(),sandwiches.end());
        for(auto &i:students) st.push_back(i);
        for(auto &i:sandwiches) sa.push(i);
        int i=0;
        while(i <= sa.size())
        {
            if(!sa.empty() && st.front() == sa.top())
            {
                st.pop_front();
                sa.pop();
                i = 0;
            }
            else
            {
                st.push_back(st.front());
                st.pop_front();
                i++;
            }
        }
        return st.size();
    }
};