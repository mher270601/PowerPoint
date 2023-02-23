#ifndef __ICOMMAND__PARSER__HPP__
#define __ICOMMAND__PARSER__HPP__

#include <iostream>

namespace PowerPoint{

	class ICmdParser{
	public:
		virtual void Parse(istream&) = 0;
	
		virtual ~ICmdParser() = default;
	};

}

#endif // __ICOMMAND__PARSER__HPP__
