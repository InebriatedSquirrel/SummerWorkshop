

#pragma once

#include "GameFramework/HUD.h"
#include "MenuHUD.generated.h"

/**
 * 
 */
UCLASS()
class AMenuHUD : public AHUD
{
	GENERATED_UCLASS_BODY()

public:

	virtual void PostInitializeComponents() OVERRIDE;

	// Main Menu Buttons
	UFUNCTION(BlueprintImplementableEvent, Category = "Menus|Main Menu")
	void SinglePlayerClicked();

	UFUNCTION(BlueprintImplementableEvent, Category = "Menus|Main Menu")
	void MultiPlayerClicked();

	UFUNCTION(BlueprintImplementableEvent, Category = "Menus|Main Menu")
	void OptionsClicked();

	UFUNCTION(BlueprintImplementableEvent, Category = "Menus|Main Menu")
	void CreditsClicked();

	UFUNCTION(BlueprintImplementableEvent, Category = "Menus|Main Menu")
	void QuitGameClicked();

	// Options Buttons
	UFUNCTION(BlueprintImplementableEvent, Category = "Menus|Options")
	void GraphicsClicked();

	UFUNCTION(BlueprintImplementableEvent, Category = "Menus|Options")
	void ControlsClicked();

	UFUNCTION(BlueprintImplementableEvent, Category = "Menus|Options")
	void AudioClicked();

	// General buttons/functions
	UFUNCTION(BlueprintCallable, Category = "Menus|General")
	void ExitMenu();

	UFUNCTION(BlueprintCallable, Category = "Menus|General")
	void OpenLoadingScreen();

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Menus|General")
	FString CurrentMenu;


	// Functions for opening new widgets/menus
	void OpenOptionsMenu();
	void OpenGraphicsMenu();
	void OpenCredits();
	

//protected:


private:
	/**
	* Reference to the Main Menu Slate UI.
	**/
	TSharedPtr<class SMainMenuWidget> MainMenuWidget; 

	TSharedPtr<class SCreditsWidget> CreditsWidget;

	TSharedPtr<class SOptionsWidget> OptionsWidget;

	TSharedPtr<class SGraphicsWidget> GraphicsWidget;

	TSharedPtr<class SLoadingScreenWidget> LoadingScreenWidget;
};
