for (int i = 0; i < s.size();i++){
        if(s[i]=='{' &&  s[i]==',' && s[i]=='}' ){
            s[i] = ' ';
        }
    }