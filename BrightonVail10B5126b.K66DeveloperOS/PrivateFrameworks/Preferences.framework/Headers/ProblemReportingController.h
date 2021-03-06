/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSListController.h"

@class PSSpecifier, PrefsUILinkLabel;

@interface ProblemReportingController : PSListController {
	PrefsUILinkLabel *_aboutDiagnosticsLinkLabel;	// 288 = 0x120
	PSSpecifier *_diagnosticDataGroupSpecifier;	// 292 = 0x124
}
+ (BOOL)isProblemReportingEnabled;	// 0x35300209
- (void)dealloc;	// 0x35300acd
- (void)diagnosticsDonePressed:(id)pressed;	// 0x3530026d
- (void)setProblemReportingEnabled:(BOOL)enabled;	// 0x353003e5
- (BOOL)shouldEnableProblemReportingForCheckedSpecifier;	// 0x35300a11
- (void)showAboutDiagnosticsSheet:(id)sheet;	// 0x35300281
- (id)specifiers;	// 0x35300501
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x35300a79
- (Class)tableViewClass;	// 0x35300251
- (void)viewDidLoad;	// 0x35300395
@end

