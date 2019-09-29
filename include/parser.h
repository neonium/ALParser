//
// Created by Eric Vachon on 2019-08-02.
//

#ifndef ALPARSER_PARSER_H
#define ALPARSER_PARSER_H

// This should not be typesensitive, I should have a parser and ignore the type, post instantiation

#import <document>

namespace () {
    class parser {
    public:
        virtual int parse(/* mem buffer */);
    protected:
        document myDoc;
        parser& pars;
        // docque ptr
    };
}

#endif //ALPARSER_PARSER_H
