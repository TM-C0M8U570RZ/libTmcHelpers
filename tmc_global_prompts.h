#ifndef TMC_GLOBAL_PROMPTS_H
#define TMC_GLOBAL_PROMPTS_H

#include "strextra.h"
#include <vector>
#include <iostream>
#include <stdexcept>

namespace tmc{

bool yesNoPrompt(const std::wstring& prompt,
                 bool caseSensitive = false,
                 bool firstCharOnly = true,
                 std::wstring l10nYes = L"yes",
                 std::wstring l10nNo = L"no",
                 const std::wstring& l10nErrMsg = L"\nINVALID CHOICE!\n");

bool yesNoPrompt(const std::string& prompt,
                 bool caseSensitive = false,
                 bool firstCharOnly = true,
                 std::wstring l10nYes = L"yes",
                 std::wstring l10nNo = L"no",
                 const std::wstring& l10nErrMsg = L"\nINVALID CHOICE!\n");

u32 namedPrompt(const std::string& prompt1,
                const std::string& prompt2,
                const std::vector<std::string>& options,
                const std::vector<std::string>& flavorTexts = {},
                bool caseSensitive = false,
                bool firstCharOnly = true,
                const std::wstring& l10nErrMsg = L"\nINVALID CHOICE!\n");

u32 namedPrompt(const std::wstring& prompt1,
                const std::wstring& prompt2,
                const std::vector<std::wstring>& options,
                const std::vector<std::wstring>& flavorTexts = {},
                bool caseSensitive = false,
                bool firstCharOnly = true,
                const std::wstring& l10nErrMsg = L"\nINVALID CHOICE!\n");

/* If humanReadable is true, menu indices start at 1 and value
 * returned is user-provided number minus one, otherwise,
 * indices start at 0 and value returned is the raw
 * user-provided number.
 */
u32 indexedPrompt(const std::string& prompt1,
                  const std::string& prompt2,
                  const std::vector<std::string>& flavorTexts,
                  bool humanReadable = true,
                  const std::wstring& l10nErrMsg = L"\nINVALID CHOICE!\n");

u32 indexedPrompt(const std::wstring& prompt1,
                  const std::wstring& prompt2,
                  const std::vector<std::wstring>& flavorTexts,
                  bool humanReadable = true,
                  const std::wstring& l10nErrMsg = L"\nINVALID CHOICE!\n");

}

#endif // TMC_GLOBAL_PROMPTS_H
