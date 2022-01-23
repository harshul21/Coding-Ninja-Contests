//lvl- medium
//not able to solve completely
string pizza(vector<int> &play){
    // Write your code here.
    play.push_back(0);
    int n = play.size();
    
    // Initialize the returning value.
    string possible = "YES";
    
    for(int i = 0; i < n; i++){
        // If play[i] is negative, we have excess pizza.
        if (play[i] < 0){
            possible = "NO";
            break;
        }
        // If play[i] is odd, we have to use a coupon.
        if (play[i] % 2){
            play[i + 1] -= 1;
        }
    }   
    return possible;
}
