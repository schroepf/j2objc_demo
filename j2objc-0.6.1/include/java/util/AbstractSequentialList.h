//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.6.1/jre_emul/apache_harmony/classlib/modules/luni/src/main/java/java/util/AbstractSequentialList.java
//
//  Created by tball on 2/19/13.
//

@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilListIterator;

#import "JreEmulation.h"
#import "java/util/AbstractList.h"

@interface JavaUtilAbstractSequentialList : JavaUtilAbstractList {
}

- (id)init;
- (void)addWithInt:(int)location
            withId:(id)object;
- (BOOL)addAllWithInt:(int)location
withJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (id)getWithInt:(int)location;
- (id<JavaUtilIterator>)iterator;
- (id<JavaUtilListIterator>)listIteratorWithInt:(int)location;
- (id)removeWithInt:(int)location;
- (id)setWithInt:(int)location
          withId:(id)object;
@end