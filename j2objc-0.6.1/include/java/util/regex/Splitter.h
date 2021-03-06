//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.6.1/jre_emul/android/libcore/luni/src/main/java/java/util/regex/Splitter.java
//
//  Created by tball on 2/19/13.
//

@class IOSObjectArray;
@class JavaUtilRegexPattern;
@protocol JavaUtilList;

#import "JreEmulation.h"

@interface JavaUtilRegexSplitter : NSObject {
}

+ (NSString *)METACHARACTERS;
- (id)init;
+ (IOSObjectArray *)fastSplitWithNSString:(NSString *)re
                             withNSString:(NSString *)input
                                  withInt:(int)limit;
+ (IOSObjectArray *)splitWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern
                                     withNSString:(NSString *)re
                                     withNSString:(NSString *)input
                                          withInt:(int)limit;
+ (IOSObjectArray *)finishSplitWithJavaUtilList:(id<JavaUtilList>)list
                                   withNSString:(NSString *)input
                                        withInt:(int)begin
                                        withInt:(int)maxSize
                                        withInt:(int)limit;
@end
