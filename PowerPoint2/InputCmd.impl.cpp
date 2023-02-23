#ifndef __INPUT__CMD__IMPL__CPP__
#define __INPUT__CMD__IMPL__CPP__

#include <iostream>
#include <cassert>
#include <exception>
#include <string>

namespace PowerPoint{

	// Invalid Command -> Throw CmdException
	CmdException::CmdException(const std::string& ErrorMessage) : m_ErrorMessage{ErrorMessage + "\n"}
	{}
	const char* CmdException::what() const noexcept{
		return m_ErrorMessage.c_str();
	}
	
	/////////////////////////////////////

	std::string CmdInput::GetCommand() const{
		std::string CurrentCommand;
		//do{
		std::cin >> CurrentCommand;
		if(CmdVerified(CurrentCommand)){
			return CurrentCommand;
		}
		throw CmdExcpetion("Invalid Command ! (if you want to finish, write 'finish' or 'end')");
		assert(false && "Must not reach here");
		//}while(CurrentCommand != "end" || CurrentCommand != "finish");
		
	}
	bool CmdInput::CmdVerified(const std::string& Expression) const noexcept{
		//TODO
		
		
		return true;	
	}

}

#endif // __INPUT__CMD__IMPL__CPP__
