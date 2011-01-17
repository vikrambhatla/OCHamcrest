//
//  OCHamcrest - HCIsDictionaryContaining.h
//  Copyright 2011 hamcrest.org. See LICENSE.txt
//
//  Created by: Jon Reid
//

    // Inherited
#import <OCHamcrest/HCBaseMatcher.h>


/**
    Matches dictionaries containing a key-value pair satisfying a given pair of matchers.
    @ingroup collection_matchers
 */
@interface HCIsDictionaryContaining : HCBaseMatcher
{
    id<HCMatcher> keyMatcher;
    id<HCMatcher> valueMatcher;
}

+ (id) isDictionaryContainingKey:(id<HCMatcher>)aKeyMatcher
                           value:(id<HCMatcher>)aValueMatcher;

- (id) initWithKeyMatcher:(id<HCMatcher>)aKeyMatcher
             valueMatcher:(id<HCMatcher>)aValueMatcher;

@end

//--------------------------------------------------------------------------------------------------

/**
    Matches dictionaries containing a key-value pair satisfying a given pair of matchers.
 
    @b Synonym: @ref hasEntry
    @param keyMatcher    A matcher - or a value for @ref equalTo matching - for the key.
    @param valueMatcher  A matcher - or a value for @ref equalTo matching - for the value.
    @see HCIsDictionaryContaining
    @ingroup collection_matchers
 */
OBJC_EXPORT id<HCMatcher> HC_hasEntry(id keyMatcher, id valueMatcher);

/**
    Synonym for @ref HC_hasEntry, available if @c HC_SHORTHAND is defined.
    @ingroup collection_matchers
 */
#ifdef HC_SHORTHAND
    #define hasEntry HC_hasEntry
#endif
