    #include <iostream>

    using namespace std;
    /// Basic Programming 1 - Kattis

    int function_1();
    string function_2();
    long long int function_3();
    long long int function_4();
    long long int function_5();
    string function_6();
    string function_7();

    ///Array and variables
    long long int group[200000];
    int n, t;

    int main()
    {
        //int attempts = 50;
        cin >> n >> t;

        for(int i = 0; i < n; i++){
            cin >> group[i];
        }

        if(t == 1){
            cout << function_1() << "\n";
        }

        if(t == 2){
            cout << function_2() << "\n";
        }

        if(t == 3){
            cout << function_3() << "\n";
        }

        if(t == 4){
            cout << function_4() << "\n";
        }

        if(t == 5){
            cout << function_5() << "\n";
        }

        if(t == 6){
            cout << function_6() << "\n";
        }

        if(t == 7){
            cout << function_7() << "\n";
        }

        return 0;
    }

    int function_1(){
        return 7;
    }

    string function_2(){
        if(group[0] == group[1]){
            string action = "Equal";
            return action;
        }

        if(group[0] > group[1]){
            string action = "Bigger";
            return action;
        }

        else{
            string action = "Smaller";
            return action;
        }
    }

    long long int function_3(){
        if(n >= 3){
            long long int median = (group[0] + group[1] + group[2])/(3);
            return median;
        }

        else{
            long long int median = 0;

            for(int i = 0; i < n; i++){
                median += group[i];
            }

            median = median / n;
            return median;
        }
    }

    long long int function_4(){
        long long int sum = 0;
        for(int i = 0; i < n; i++){
            sum += group[i];
        }

        return sum;
    }

    long long int function_5(){
        long long int sum = 0;

        for(int i = 0; i < n; i++){
            if(group[i] % 2 == 0){
                sum += group[i];
            }
        }

        return sum;
    }

    string function_6(){
        string word;
        for(int i = 0; i < n; i++){
            group[i] = group[i] % 26;
            group[i] += 97;
            char letter = group[i];

            word += letter;
        }

        return word;
    }

    string function_7(){
        int place = group[0];

        for(int i = 0; i < n; i++){
            if(place == (n-1)){
                string state = "Done";
                return state;
            }

            if(place > (n-1)){
                string state = "Out";
                return state;
            }

            place = group[place];
        }

        string state = "Cyclic";
        return state;
    }

