int nextMove(vector<int>& comp, int& good_pos)
{

    int max = 0, pos; 
    for(int i = 0; i < comp.size()-good_pos; i++)
    {
        if(max < comp[i])
        {
            max = comp[i];
            pos = i;
        }
    }

    if(pos == 0)
    {
        vector<int> temp = comp;
        for(int i = comp.size()-1-good_pos; i >= 0; i--)
            comp[i] = temp[(comp.size()-1-good_pos)-i];
            
        good_pos++;
        return comp.size()-good_pos;
    }
    else if(pos == comp.size()-1-good_pos)
    {
        good_pos++;
        return 0;
    }
    else
    {
        vector<int> temp = comp;
        for(int i = pos; i >= 0; i--)
            comp[i] = temp[pos-i];
        return pos;
    }
    
}

void ContestExerciseImpl::main() {
    vector<int> comp;
    int n, value;
    cin >> n;
    for(int i =  0; i < n ; i++)
    {
        cin >> value;
        comp.push_back(value);
    }
    
    stringstream ss;
    int good_pos = 0;
    while(good_pos+1 != comp.size()) 
        ss << nextMove(comp, good_pos)+1 << " ";
    
    cout << ss.str();
    
}