for (int i = 0; i < s.size();i++){
        if(s[i]!='a'||s[i]!='e'||s[i]!='i'||s[i]!='o'||s[i]!='u'||s[i]!='A'||s[i]!='E'||s[i]!='I'||s[i]!='O'||s[i]!='U'){
            s[i - 1] = '.';
        }
    }