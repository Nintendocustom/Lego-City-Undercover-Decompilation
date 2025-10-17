#pragma once

// none of these actually have code
namespace NuLoadTimer {
void BeginSection(char* section_name);
void BeginSectionScoped(char* section_name, Scoped* param2);
void DebugDraw();
void EndSection();
void FrameEnd();
void HandleDump();
void HandleDumpXml();
void HandleReset();
void Initialize();
void Reset();
}  // namespace NuLoadTimer