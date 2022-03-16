// Shoot Them Up. All Rights Reserved.


#include "Menu/UI/STUMenuUserWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void USTUMenuUserWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if (StartGameButton)
	{
		StartGameButton->OnClicked.AddDynamic(this, &USTUMenuUserWidget::OnStartGame);
	}
}

void USTUMenuUserWidget::OnStartGame()
{
	const FName StartupLevelName = "TestLevel";
	UGameplayStatics::OpenLevel(this, StartupLevelName);
}
