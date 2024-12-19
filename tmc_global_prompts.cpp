#include "tmc_global_prompts.h"
#include <limits>

namespace tmc{

bool yesNoPrompt(const std::wstring& prompt,
                 bool caseSensitive,
                 bool firstCharOnly,
                 std::wstring l10nYes, // create non-const copies for changing case
                 std::wstring l10nNo,
                 const std::wstring& l10nErrMsg)
{
    bool valid = false;
    bool yes = false;
    while (!valid)
    {
        std::string response;
        std::string strl10nErrMsg(l10nErrMsg.begin(), l10nErrMsg.end());
        std::string strPrompt(prompt.begin(), prompt.end());
        std::cout << strPrompt;
        std::getline(std::cin, response);
        if (l10nYes.empty()
            || l10nNo.empty()
            || response.empty())
        {
            throw std::invalid_argument("Choices cannot be empty!");
        }
        std::wstring wsResponse(response.begin(), response.end());
        if (!caseSensitive)
        {
            l10nYes = toAllUpper(l10nYes);
            l10nNo = toAllUpper(l10nNo);
            wsResponse = toAllUpper(wsResponse);
        }
        if (firstCharOnly)
        {
            if (wsResponse[0] == l10nYes[0])
            {
                yes = true;
                valid = true;
            }
            else if (wsResponse[0] == l10nNo[0])
            {
                valid = true;
            }
            else
            {
                std::cout << strl10nErrMsg;
            }
        }
        else
        {
            if (wsResponse == l10nYes)
            {
                yes = true;
                valid = true;
            }
            else if (wsResponse == l10nNo)
            {
                valid = true;
            }
            else
            {
                std::cout << strl10nErrMsg;
            }
        }
    }
    return yes;
}

bool yesNoPrompt(const std::string& prompt,
                 bool caseSensitive,
                 bool firstCharOnly,
                 std::wstring l10nYes,
                 std::wstring l10nNo,
                 const std::wstring& l10nErrMsg)
{
    bool valid = false;
    std::string strl10nErrMsg(l10nErrMsg.begin(), l10nErrMsg.end());
    bool yes = false;
    while (!valid)
    {
        std::string response;
        std::cout << prompt;
        std::getline(std::cin, response);
        if (l10nYes.empty()
            || l10nNo.empty()
            || response.empty())
        {
            throw std::invalid_argument("Choices cannot be empty!");
        }
        if (!caseSensitive)
        {
            l10nYes = toAllUpper(l10nYes);
            l10nNo = toAllUpper(l10nNo);
            response = toAllUpper(response);
        }
        std::wstring wsResponse(response.begin(), response.end());
        if (firstCharOnly)
        {
            if (wsResponse[0] == l10nYes[0])
            {
                yes = true;
                valid = true;
            }
            else if (wsResponse[0] == l10nNo[0])
            {
                valid = true;
            }
            else
            {
                std::cout << strl10nErrMsg;
            }
        }
        else
        {
            if (wsResponse == l10nYes)
            {
                yes = true;
                valid = true;
            }
            else if (wsResponse == l10nNo)
            {
                valid = true;
            }
            else
            {
                std::cout << strl10nErrMsg;
            }
        }
    }
    return yes;
}

u32 namedPrompt(const std::string& prompt1,
                const std::string& prompt2,
                const std::vector<std::string>& options,
                const std::vector<std::string>& flavorTexts,
                bool caseSensitive,
                bool firstCharOnly,
                const std::wstring& l10nErrMsg)
{
    bool valid = false;
    std::string strl10nErrMsg(l10nErrMsg.begin(), l10nErrMsg.end());
    u32 choice = 0;
    while (!valid)
    {
        std::string response;
        std::cout << prompt1;
        if (options.size() < flavorTexts.size())
        {
            for (std::vector<std::string>::size_type i = 0;
                 i < options.size(); i++)
            {
                std::cout << options[i] << ")\t\t";
                std::cout << flavorTexts[i] << "\n";
            }
        }
        else if (flavorTexts.size() == 0)
        {
            for (std::vector<std::string>::size_type i = 0;
                 i < options.size(); i++)
            {
                std::cout << options[i] << ")\t\t";
            }
        }
        else
        {
            for (std::vector<std::string>::size_type i = 0;
                 i < flavorTexts.size(); i++)
            {
                std::cout << options[i] << ")\t\t";
                std::cout << flavorTexts[i] << "\n";
            }
        }
        std::cout << prompt2;
        std::getline(std::cin, response);
        for (std::vector<std::string>::size_type i = 0;
             i < options.size(); i++)
        {
            std::string str = options[i];
            if (!caseSensitive)
            {
                str = toAllUpper(str);
                response = toAllUpper(response);
            }
            if (firstCharOnly)
            {
                if (response[0] == str[0])
                {
                    choice = static_cast<s32>(i);
                    valid = true;
                }
            }
            else
            {
                if (response == str)
                {
                    choice = static_cast<s32>(i);
                    valid = true;
                }
            }
        }
        if (!valid)
        {
            std::cout << strl10nErrMsg;
        }
    }
    return choice;
}

u32 namedPrompt(const std::wstring& prompt1,
                const std::wstring& prompt2,
                const std::vector<std::wstring>& options,
                const std::vector<std::wstring>& flavorTexts,
                bool caseSensitive,
                bool firstCharOnly,
                const std::wstring& l10nErrMsg)
{
    bool valid = false;
    std::string strl10nErrMsg(l10nErrMsg.begin(), l10nErrMsg.end());
    u32 choice = 0;
    while (!valid)
    {
        std::string response;
        std::string strPrompt1(prompt1.begin(), prompt1.end());
        std::cout << strPrompt1;
        if (options.size() < flavorTexts.size())
        {
            for (std::vector<std::wstring>::size_type i = 0;
                 i < options.size(); i++)
            {
                std::cout << std::string(options[i].begin(), options[i].end()) << ")\t\t";
                std::cout << std::string(flavorTexts[i].begin(), flavorTexts[i].end()) << "\n";
            }
        }
        else if (flavorTexts.size() == 0)
        {
            for (std::vector<std::wstring>::size_type i = 0;
                 i < options.size(); i++)
            {
                std::cout << std::string(options[i].begin(), options[i].end()) << ")\n";
            }
        }
        else
        {
            for (std::vector<std::wstring>::size_type i = 0;
                 i < flavorTexts.size(); i++)
            {
                std::cout << std::string(options[i].begin(), options[i].end()) << ")\t\t";
                std::cout << std::string(flavorTexts[i].begin(), flavorTexts[i].end()) << "\n";
            }
        }
        std::string strPrompt2(prompt2.begin(), prompt2.end());
        std::cout << strPrompt2;
        std::getline(std::cin, response);
        std::wstring wsResponse(response.begin(), response.end());
        for (std::vector<std::wstring>::size_type i = 0;
             i < options.size(); i++)
        {
            std::wstring str = options[i];
            if (!caseSensitive)
            {
                str = toAllUpper(str);
                wsResponse = toAllUpper(wsResponse);
            }
            if (firstCharOnly)
            {
                if (wsResponse[0] == str[0])
                {
                    choice = static_cast<s32>(i);
                    valid = true;
                }
            }
            else
            {
                if (wsResponse == str)
                {
                    choice = static_cast<s32>(i);
                    valid = true;
                }
            }
        }
        if (!valid)
        {
            std::cout << strl10nErrMsg;
        }
    }
    return choice;
}

u32 indexedPrompt(const std::string& prompt1,
                  const std::string& prompt2,
                  const std::vector<std::string>& flavorTexts,
                  bool humanReadable,
                  const std::wstring& l10nErrMsg)
{
    std::string strl10nErrMsg(l10nErrMsg.begin(), l10nErrMsg.end());
    bool valid = false;
    u32 index = 0;
    while (!valid)
    {
        std::cout << prompt1;
        for (std::vector<std::string>::size_type i = 0;
             i < flavorTexts.size(); i++)
        {
            std::cout << (humanReadable ? (i+1) : i) << "\t\t";
            std::cout << flavorTexts[i] << "\n";
        }
        std::cout << prompt2;
        std::cin >> index;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (std::cin.fail())
        {
            std::cin.clear();
            throw std::runtime_error("Not an integer!");
        }
        if (humanReadable) index--;
        if (index < flavorTexts.size()) valid = true;
        else std::cout << strl10nErrMsg;
    }
    return index;
}

u32 indexedPrompt(const std::wstring& prompt1,
                  const std::wstring& prompt2,
                  const std::vector<std::wstring>& flavorTexts,
                  bool humanReadable,
                  const std::wstring& l10nErrMsg)
{
    std::string strl10nErrMsg(l10nErrMsg.begin(), l10nErrMsg.end());
    bool valid = false;
    std::string strPrompt1(prompt1.begin(), prompt1.end());
    std::string strPrompt2(prompt2.begin(), prompt2.end());
    u32 index = 0;
    while (!valid)
    {
        std::cout << strPrompt1;
        for (std::vector<std::wstring>::size_type i = 0;
             i < flavorTexts.size(); i++)
        {
            std::cout << (humanReadable ? (i+1) : i) << "\t\t";
            std::cout << std::string(flavorTexts[i].begin(), flavorTexts[i].end()) << "\n";
        }
        std::cout << strPrompt2;
        std::cin >> index;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (std::cin.fail())
        {
            std::cin.clear();
            throw std::runtime_error("Not an integer!");
        }
        if (humanReadable) index--;
        if (index < flavorTexts.size()) valid = true;
        else std::cout << strl10nErrMsg;
    }
    return index;
}

}
