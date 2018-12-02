#ifndef LIBRARY_CALL_HEADER
#define LIBRARY_CALL_HEADER

#include "LabelStatement.h"

class LibraryCallStatement : public LabelStatement {

public:
	LibraryCallStatement(const std::string& label):
	  LabelStatement(StatementType::LIBRARY_CALL,label) {}
	
	void toCode() const;
};


#endif	/* Library Call Header Included */
