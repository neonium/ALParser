//
// Created by Eric Vachon on 2019-08-02.
//

#include <parser.h>

namespace (){
    int parser::parse(/* mem buffer */){
        try{
            pars.parse();
        } catch (std::exception) {
            //do something meaningful here
            return -1;
        }
        if (1/* done */){
            // Need to have a ptr of some sort to request/data queue
            return 1
        }
        return 0;
    }
}