#ifndef __COMMAND__PARSER__IMPL__CPP__
#define __COMMAND__PARSER__IMPL__CPP__

#include <iostream>



namespace PowerPoint{

	static CmdParser& CmdParser::GetInstance(){
		// Meyer's Singleton
		static CmdParser Instance;
		return Instance;
	}

	void CmdParser::Parse(istream& expr){
		
	}

	CmdParser::CmdParser(){
		
	}
}

#endif // __COMMAND__PARSER__IMPL__CPP__
