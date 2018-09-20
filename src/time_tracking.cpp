//
// Created by shahnoor on 9/17/18.
//

#include "time_tracking.h"

using namespace std;

/**
	formated date
	24 hour formated time
*/
string getCurrentTime(){

    time_t rawtime;
    struct tm * timeinfo;
    char buffer [80];

    time (&rawtime);
    timeinfo = localtime (&rawtime);

    strftime (buffer,80,"%F_%H%M%S",timeinfo);
    return buffer;
}