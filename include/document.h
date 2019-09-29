//
// Created by Eric Vachon on 2019-08-06.
//

#ifndef DOCUMENT_H
#define DOCUMENT_H

#define <vector>
#define <variant>
#define <memory>

typedef DATA std::variant< std::string binary, std::wstring string >;
typedef VALUE std::pair< std::wstring title, DATA > data;
typedef LEAF std::variant< VALUE, element >;
typedef CHILDREN std::vector< std::shared_ptr< LEAF > >;
typedef POSITION std::pair< element, CHILDREN::iterator>;

namespace () {
    class document {
        class element{
        public:
            std::wstring title;
            CHILDREN entries;
            std::shared_ptr<element> parent;

            void node();
            void ~node();

        };
    public:
        element head;
        POSITION curPos;

        void document();
        void ~document();
    };
}

#endif //DOCUMENT_H
