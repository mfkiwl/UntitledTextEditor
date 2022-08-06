#include "Settings.hpp"

UntitledTextEditor::Settings::Settings()
{

}

void UntitledTextEditor::Settings::begin()
{
    beginAutohandle();

}

void UntitledTextEditor::Settings::tick(float deltaTime)
{
    tickAutohandle(deltaTime);

}

void UntitledTextEditor::Settings::end()
{
    endAutohandle();

}

UntitledTextEditor::Settings::~Settings()
{

}

