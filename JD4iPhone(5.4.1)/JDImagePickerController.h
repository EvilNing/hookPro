//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class JDCaptureSession, NSString, UIBarButtonItem, UIButton, UIImagePickerController, UIToolbar, UIView;

@interface JDImagePickerController : JDViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    _Bool flashIsOn;
    _Bool imagePickerDismissed;
    _Bool hasFlash;
    JDCaptureSession *_captureManager;
    UIToolbar *_cameraToolbar;
    UIButton *_flashButton;
    UIBarButtonItem *_pictureButton;
    UIBarButtonItem *_photoLibButton;
    UIView *_cameraPictureTakenFlash;
    UIImagePickerController *_invokeCamera;
    id <JDImagePickerControllerDelegate> _delegate;
    long long *_sourceType;
}

@property long long *sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) id <JDImagePickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImagePickerController *invokeCamera; // @synthesize invokeCamera=_invokeCamera;
@property(retain, nonatomic) UIView *cameraPictureTakenFlash; // @synthesize cameraPictureTakenFlash=_cameraPictureTakenFlash;
@property(retain, nonatomic) UIBarButtonItem *photoLibButton; // @synthesize photoLibButton=_photoLibButton;
@property(retain, nonatomic) UIBarButtonItem *pictureButton; // @synthesize pictureButton=_pictureButton;
@property(retain, nonatomic) UIButton *flashButton; // @synthesize flashButton=_flashButton;
@property(retain, nonatomic) UIToolbar *cameraToolbar; // @synthesize cameraToolbar=_cameraToolbar;
@property(retain, nonatomic) JDCaptureSession *captureManager; // @synthesize captureManager=_captureManager;
- (void)removeNotificationObservers;
- (void)dismissJDImagePickerController;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)loadAnimated:(_Bool)arg1;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)closeImageViewController:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)transitionToJDImagePickerControllerPreviewViewController;
- (void)storeFlashSettingWithBool:(_Bool)arg1;
- (void)loadPhotoLibrary;
- (void)toggleFlash;
- (void)pictureJDIMagePickerController;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)getThumbnail;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

