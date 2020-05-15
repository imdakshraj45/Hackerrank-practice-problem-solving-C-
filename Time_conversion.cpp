#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    string hour= s.substr(0,2);
    string id= s.substr(8,2);
    int hr= stoi(hour.c_str());
    if(id=="PM")
    {
        if(hr != 12)
        {
            hr=hr+12;
        }
        hour= to_string(hr);
    }
    if(id=="AM")
    {
        if(hr==12)
        {
            hour="00";
        }
        else if(hr<10)
        {
            hour="0"+to_string(hr);
        }
        else
        {
            hour=to_string(hr);
        }
    }
    return hour + s.substr(2,6);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
