#include "Instance.hpp"
#include <Modules/Modules.hpp>

UntitledTextEditor::Instance::Instance()
{
    initInfo.windowComponents = { &about, &exit, &open, &save, &filesystem, &hexEditor, &settings, &tabTemplate, &terminal };
    initInfo.titlebarComponents = { &mainBar };
}

void UntitledTextEditor::Instance::begin()
{
    beginAutohandle();
}

void UntitledTextEditor::Instance::tick(float deltaTime)
{
    tickAutohandle(deltaTime);

}

void UntitledTextEditor::Instance::end()
{
    endAutohandle();

}

UntitledTextEditor::Instance::~Instance()
{

}

void UntitledTextEditor::Instance::onEventConfigureStyle(ImGuiStyle& style, ImGuiIO& io)
{

}
