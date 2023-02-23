#ifndef __COMMAND__PARSER__HPP__
#define __COMMAND__PARSER__HPP__

#include <iostream>

#include "ICmdParser.hpp"

namespace PowerPoint{
	
	class CmdParser : public ICmdParser{
	public:
		// Meyer's Singleton
		static CmdParser& GetInstance();
		CmdParser(const CmdParser&) = delete;
		CmdParser& operator=(const CmdParser&) = delete;
		void Parse(istream&) override;
	private:
		CmdParser();
		//CmdTokenizer tokenizer;
	};

}

#include "CmdParser.impl.cpp"

#endif // __COMMAND__PARSER__HPP__
