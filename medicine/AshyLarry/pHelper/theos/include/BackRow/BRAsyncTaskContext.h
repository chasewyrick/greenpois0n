/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */


@class NSString, NSMutableArray;

@interface BRAsyncTaskContext : NSObject {
@private
	int _maxRunningTasks;	// 4 = 0x4
	int _numRunningTasks;	// 8 = 0x8
	NSMutableArray *_taskQueue;	// 12 = 0xc
	NSMutableArray *_allTasks;	// 16 = 0x10
	NSString *_name;	// 20 = 0x14
}
+ (id)defaultContext;	// 0x315b11b1
+ (void)initialize;	// 0x3158fd01
- (id)initWithMaxTasks:(int)maxTasks;	// 0x3158fd59
- (id)initWithMaxTasks:(int)maxTasks name:(id)name;	// 0x3163c08d
- (void)_addManagerObserverForTask:(id)task;	// 0x315b1365
- (void)_cancelAllTasks;	// 0x3163bebd
- (void)_removeManagerObserverForTask:(id)task;	// 0x315b3755
- (void)_scheduleNextTask:(id)task;	// 0x3163c6b1
- (void)_taskComplete:(id)complete;	// 0x315b3621
- (void)_threadDeath:(id)death;	// 0x3163c19d
- (void)cancelTask:(id)task;	// 0x3163c2d5
- (void)cancelTaskWithIdentifier:(id)identifier;	// 0x3163c431
- (void)dealloc;	// 0x3163bff9
- (id)description;	// 0x3163bf8d
- (void)scheduleTask:(id)task;	// 0x315b122d
@end

