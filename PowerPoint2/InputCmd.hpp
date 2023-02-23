#ifndef __INPUT__CMD__HPP__
#define __INPUT__CMD__HPP__

#include <exception>
#include <string>
#include <memory>

#include "IInput.hpp"

namespace PowerPoint{
 
	class CmdException : public std::exception{
	public:
		explicit CmdException(const std::string& ErrorMessage);
		const char* what() const noexcept;
	private:
		std::string m_ErrorMessage;
	};

	class CmdInput : ICmdInput{
	public:
		CmdInput(const CmdInput& rhs) = delete;	
		CmdInput& operator=(const CmdInput& rhs) = delete;
	public:
		// Interface
		static std::shared_ptr<CmdInput> GetInstance(){
			// Meyer's Singleton
			static std::shared_ptr<CmdInput> Instance(new CmdInput);
			return Instance;
		}
		std::string GetCommand() const override;
	private: // Helpers
		bool CmdVerified() const noexcept override;
	private:
		CmdInput() = default;
	}
}

#include "CmdInput.impl.cpp"

#endif // __INPUT__CMD__HPP__
