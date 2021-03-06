/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UILocalNotification.h"

@class NSDate, NSData, NSCalendar, NSTimeZone, NSString;

__attribute__((visibility("hidden")))
@interface UIConcreteLocalNotification : UILocalNotification {
@private
	NSDate *fireDate;	// 4 = 0x4
	NSTimeZone *timeZone;	// 8 = 0x8
	unsigned repeatInterval;	// 12 = 0xc
	NSCalendar *repeatCalendar;	// 16 = 0x10
	int totalRepeatCount;	// 20 = 0x14
	int remainingRepeatCount;	// 24 = 0x18
	NSString *alertBody;	// 28 = 0x1c
	BOOL hasAction;	// 32 = 0x20
	NSString *alertAction;	// 36 = 0x24
	NSString *alertLaunchImage;	// 40 = 0x28
	NSString *soundName;	// 44 = 0x2c
	int applicationIconBadgeNumber;	// 48 = 0x30
	NSData *userInfoData;	// 52 = 0x34
	BOOL hideAlertTitle;	// 56 = 0x38
	BOOL allowSnooze;	// 57 = 0x39
	int soundType;	// 60 = 0x3c
	BOOL interruptAudioAndLockDevice;	// 64 = 0x40
	BOOL resumeApplicationInBackground;	// 65 = 0x41
	BOOL fireNotificationsWhenAppRunning;	// 66 = 0x42
	BOOL showAlarmStatusBarItem;	// 67 = 0x43
	NSString *customLockSliderLabel;	// 68 = 0x44
	NSString *firedNotificationName;	// 72 = 0x48
	NSString *snoozedNotificationName;	// 76 = 0x4c
	BOOL isSystemAlert;	// 80 = 0x50
}
@property(retain) NSString *alertAction;	// G=0x303a948d; S=0x303a94a1; converted property
@property(retain) NSString *alertBody;	// G=0x303a9449; S=0x303a945d; converted property
@property(retain) NSString *alertLaunchImage;	// G=0x303a94b1; S=0x303a94c5; converted property
@property(assign) BOOL allowSnooze;	// G=0x303a9569; S=0x303a9579; converted property
@property(assign) int applicationIconBadgeNumber;	// G=0x303a94f9; S=0x303a9509; converted property
@property(retain) NSString *customLockSliderLabel;	// G=0x303a9619; S=0x303a962d; converted property
@property(retain) NSDate *fireDate;	// G=0x303a93bd; S=0x303a93d1; converted property
@property(assign) BOOL fireNotificationsWhenAppRunning;	// G=0x303a95d9; S=0x303a95e9; converted property
@property(retain) NSString *firedNotificationName;	// G=0x303a963d; S=0x303a9651; converted property
@property(assign) BOOL hasAction;	// G=0x303a946d; S=0x303a947d; converted property
@property(assign) BOOL hideAlertTitle;	// G=0x303a9549; S=0x303a9559; converted property
@property(assign) BOOL interruptAudioAndLockDevice;	// G=0x303a9599; S=0x303a95a9; converted property
@property(assign) BOOL isSystemAlert;	// G=0x303a9685; S=0x303a9695; converted property
@property(assign) int remainingRepeatCount;	// G=0x303a9529; S=0x303a9539; converted property
@property(retain) NSCalendar *repeatCalendar;	// G=0x303a9425; S=0x303a9439; converted property
@property(assign) unsigned repeatInterval;	// G=0x303a9405; S=0x303a9415; converted property
@property(assign) BOOL resumeApplicationInBackground;	// G=0x303a95b9; S=0x303a95c9; converted property
@property(assign) BOOL showAlarmStatusBarItem;	// G=0x303a95f9; S=0x303a9609; converted property
@property(retain) NSString *snoozedNotificationName;	// G=0x303a9661; S=0x303a9675; converted property
@property(retain) NSString *soundName;	// G=0x303a94d5; S=0x303a94e9; converted property
@property(assign) int soundType;	// G=0x303a9589; S=0x303a7091; converted property
@property(retain) NSTimeZone *timeZone;	// G=0x303a93e1; S=0x303a93f5; converted property
@property(assign) int totalRepeatCount;	// G=0x303a9519; S=0x303a70a9; converted property
@property(retain) id userInfo;	// G=0x303a855d; S=0x303a8419; converted property
- (id)init;	// 0x303a70c9
- (id)initWithCoder:(id)coder;	// 0x303a7239
- (void)_setUserInfoData:(id)data;	// 0x303a83dd
// converted property getter: - (id)alertAction;	// 0x303a948d
// converted property getter: - (id)alertBody;	// 0x303a9449
// converted property getter: - (id)alertLaunchImage;	// 0x303a94b1
// converted property getter: - (BOOL)allowSnooze;	// 0x303a9569
// converted property getter: - (int)applicationIconBadgeNumber;	// 0x303a94f9
- (void)clearNonSystemProperties;	// 0x303a92fd
- (int)compareFireDates:(id)dates;	// 0x303a8351
- (id)copyWithZone:(NSZone *)zone;	// 0x303a7a99
// converted property getter: - (id)customLockSliderLabel;	// 0x303a9619
- (void)dealloc;	// 0x303a7121
- (id)description;	// 0x303a85dd
- (void)encodeWithCoder:(id)coder;	// 0x303a775d
// converted property getter: - (id)fireDate;	// 0x303a93bd
// converted property getter: - (BOOL)fireNotificationsWhenAppRunning;	// 0x303a95d9
// converted property getter: - (id)firedNotificationName;	// 0x303a963d
// converted property getter: - (BOOL)hasAction;	// 0x303a946d
- (unsigned)hash;	// 0x303a8301
// converted property getter: - (BOOL)hideAlertTitle;	// 0x303a9549
// converted property getter: - (BOOL)interruptAudioAndLockDevice;	// 0x303a9599
- (BOOL)isEqual:(id)equal;	// 0x303a7dd9
// converted property getter: - (BOOL)isSystemAlert;	// 0x303a9685
- (BOOL)isValid;	// 0x303a9291
- (id)nextFireDateAfterDate:(id)date localTimeZone:(id)zone;	// 0x303a89c9
- (id)nextFireDateForLastFireDate:(id)lastFireDate;	// 0x303a8909
// converted property getter: - (int)remainingRepeatCount;	// 0x303a9529
// converted property getter: - (id)repeatCalendar;	// 0x303a9425
// converted property getter: - (unsigned)repeatInterval;	// 0x303a9405
// converted property getter: - (BOOL)resumeApplicationInBackground;	// 0x303a95b9
// converted property setter: - (void)setAlertAction:(id)action;	// 0x303a94a1
// converted property setter: - (void)setAlertBody:(id)body;	// 0x303a945d
// converted property setter: - (void)setAlertLaunchImage:(id)image;	// 0x303a94c5
// converted property setter: - (void)setAllowSnooze:(BOOL)snooze;	// 0x303a9579
// converted property setter: - (void)setApplicationIconBadgeNumber:(int)number;	// 0x303a9509
// converted property setter: - (void)setCustomLockSliderLabel:(id)label;	// 0x303a962d
// converted property setter: - (void)setFireDate:(id)date;	// 0x303a93d1
// converted property setter: - (void)setFireNotificationsWhenAppRunning:(BOOL)running;	// 0x303a95e9
// converted property setter: - (void)setFiredNotificationName:(id)name;	// 0x303a9651
// converted property setter: - (void)setHasAction:(BOOL)action;	// 0x303a947d
// converted property setter: - (void)setHideAlertTitle:(BOOL)title;	// 0x303a9559
// converted property setter: - (void)setInterruptAudioAndLockDevice:(BOOL)device;	// 0x303a95a9
// converted property setter: - (void)setIsSystemAlert:(BOOL)alert;	// 0x303a9695
// converted property setter: - (void)setRemainingRepeatCount:(int)count;	// 0x303a9539
// converted property setter: - (void)setRepeatCalendar:(id)calendar;	// 0x303a9439
// converted property setter: - (void)setRepeatInterval:(unsigned)interval;	// 0x303a9415
// converted property setter: - (void)setResumeApplicationInBackground:(BOOL)background;	// 0x303a95c9
// converted property setter: - (void)setShowAlarmStatusBarItem:(BOOL)item;	// 0x303a9609
// converted property setter: - (void)setSnoozedNotificationName:(id)name;	// 0x303a9675
// converted property setter: - (void)setSoundName:(id)name;	// 0x303a94e9
// converted property setter: - (void)setSoundType:(int)type;	// 0x303a7091
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x303a93f5
// converted property setter: - (void)setTotalRepeatCount:(int)count;	// 0x303a70a9
// converted property setter: - (void)setUserInfo:(id)info;	// 0x303a8419
// converted property getter: - (BOOL)showAlarmStatusBarItem;	// 0x303a95f9
// converted property getter: - (id)snoozedNotificationName;	// 0x303a9661
// converted property getter: - (id)soundName;	// 0x303a94d5
// converted property getter: - (int)soundType;	// 0x303a9589
// converted property getter: - (id)timeZone;	// 0x303a93e1
// converted property getter: - (int)totalRepeatCount;	// 0x303a9519
// converted property getter: - (id)userInfo;	// 0x303a855d
@end

