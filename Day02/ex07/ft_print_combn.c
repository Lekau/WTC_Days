void ft_putchar(char n){

    write(1, &n, 1);

}

void ft_print_combn(int n){

    switch (n)
    {
    case 1:
        char a;
        a = n +'0';
        while(a <= '9')
        {
            ft_putchar(a);
            ++a;
        }
        break;
    case 2:
        char a;
        char b;

        a = n +'0';
        b = n +'0';

        while (a <= '9'){
            while(b <= '9'){
                if (a =! b) {
                    ft_putchar(a);
                    ft_putchar(b);
                    ++b;
                } else {
                    ++b;
                }
            
            }
            b = '0';
            ++a;
        }

        break;
    case 3:
        char a;
        char b;
        char c;

        a = n +'0';
        b = n +'0';
        c = n +'0';

        while(a <= '9'){
            while(b <= '9'){
                while(c <= '9') {
                    if(a != b || b != c || c != a){
                        ft_putchar(a);
                        ft_putchar(b);
                        ft_putchar(c);
                        ++c;
                    }
                }
                c = '0';
                ++b;
            }
            c = '0';
            ++a;
        }
        break;
    case 4:
        char a;
        char b;
        char c;
        char d;

        a = n +'0';
        b = n +'0';
        c = n +'0';
        d = n +'0';

        while(a <= '9') { 
            while(b <= '9'){
                while(c <= '9'){
                    while(d <= '9') {
                        if(a != b || b != c || c != a || a != d || d != c || d != b){
                            ft_putchar(a);
                            ft_putchar(b);
                            ft_putchar(c);
                            ft_putchar(d);
                            ++d;
                        } else {
                            ++d;
                        }
                    }
                    d = '0';
                    ++c;
                }
                c = '0';
                ++b;
            }
            b = '0';
            ++a;
        }

        break;
    case 5:
        char a;
        char b;
        char c;
        char d;
        char e;

        a = n +'0';
        b = n +'0';
        c = n +'0';
        d = n +'0';
        e = n +'0';
        break;
    case 6:
        char a;
        char b;
        char c;
        char d;
        char e;
        char f;

        a = n +'0';
        b = n +'0';
        c = n +'0';
        d = n +'0';
        e = n +'0';
        f = n +'0';
        break;
    case 7:
        char a;
        char b;
        char c;
        char d;
        char e;
        char f;
        char g;

        a = n +'0';
        b = n +'0';
        c = n +'0';
        d = n +'0';
        e = n +'0';
        f = n +'0';
        g = n +'0';
        break;
    case 8:
        char a;
        char b;
        char c;
        char d;
        char e;
        char f;
        char g;
        char h;

        a = n +'0';
        b = n +'0';
        c = n +'0';
        d = n +'0';
        e = n +'0';
        f = n +'0';
        g = n +'0';
        h = n +'0';
        break;
    case 9:
        char a;
        char b;
        char c;
        char d;
        char e;
        char f;
        char g;
        char h;
        char i;

        a = n +'0';
        b = n +'0';
        c = n +'0';
        d = n +'0';
        e = n +'0';
        f = n +'0';
        g = n +'0';
        h = n +'0';
        i = n +'0';
        break;

    default:
        /* code */
        break;
    }

}