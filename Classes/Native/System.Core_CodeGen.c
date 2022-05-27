#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000C System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Except(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ExceptIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ReverseIterator(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000015 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000016 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast(System.Collections.IEnumerable)
// 0x00000018 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::CastIterator(System.Collections.IEnumerable)
// 0x00000019 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001A TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001B TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001C TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001D TSource System.Linq.Enumerable::LastOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001E TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001F TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000020 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000021 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000022 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000023 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000025 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000026 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x00000027 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
// 0x00000028 System.Int32 System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Max_mE02EED2C10C2F8F0B2DCE468C87EF3064E854A8D (void);
// 0x00000029 System.Int32 System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
// 0x0000002A System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000002B TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002D System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002E System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002F System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000033 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000034 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000035 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000036 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000037 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000038 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000039 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003B System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003D System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000040 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000041 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000042 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000043 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000044 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000045 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000046 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000047 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000048 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000049 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004B System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004C System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004D System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004E System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000050 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000051 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000052 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000053 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000054 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000055 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000056 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000057 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000058 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000059 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000005A System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000005B System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000005E TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000005F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000060 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000061 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000062 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000063 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000064 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000065 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000066 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000067 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000068 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000069 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x0000006A System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006B System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006C System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::.ctor(System.Int32)
// 0x0000006D System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.IDisposable.Dispose()
// 0x0000006E System.Boolean System.Linq.Enumerable/<ExceptIterator>d__77`1::MoveNext()
// 0x0000006F System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::<>m__Finally1()
// 0x00000070 TSource System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000071 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.Reset()
// 0x00000072 System.Object System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.get_Current()
// 0x00000073 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000074 System.Collections.IEnumerator System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000075 System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::.ctor(System.Int32)
// 0x00000076 System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::System.IDisposable.Dispose()
// 0x00000077 System.Boolean System.Linq.Enumerable/<ReverseIterator>d__79`1::MoveNext()
// 0x00000078 TSource System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000079 System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerator.Reset()
// 0x0000007A System.Object System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerator.get_Current()
// 0x0000007B System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000007C System.Collections.IEnumerator System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007D System.Void System.Linq.Enumerable/<CastIterator>d__99`1::.ctor(System.Int32)
// 0x0000007E System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.IDisposable.Dispose()
// 0x0000007F System.Boolean System.Linq.Enumerable/<CastIterator>d__99`1::MoveNext()
// 0x00000080 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::<>m__Finally1()
// 0x00000081 TResult System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000082 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.Reset()
// 0x00000083 System.Object System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.get_Current()
// 0x00000084 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000085 System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000086 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000087 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000088 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000089 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x0000008A System.Void System.Linq.Set`1::Resize()
// 0x0000008B System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x0000008C System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000008D System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000008E System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000008F System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000090 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000091 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000092 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000093 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000094 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000095 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000096 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000097 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000098 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000099 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x0000009A System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x0000009B System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x0000009C System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x0000009D System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x0000009E System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000009F System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000A0 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000A1 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000A2 TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000A3 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000A4 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000A5 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000A6 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000A7 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000A8 System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x000000A9 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000AA System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000AB System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000AC System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000AD System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000AE System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000AF System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000B0 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000B1 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000B2 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000B3 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000B4 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000B5 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000B6 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000B7 System.Void System.Collections.Generic.HashSet`1::ExceptWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000B8 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000B9 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000BA System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x000000BB System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x000000BC System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000BD System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000BE System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000BF System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000C0 System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x000000C1 System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x000000C2 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000C3 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000C4 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000C5 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000C6 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000C7 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000C8 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[200] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5,
	NULL,
	Enumerable_Max_mE02EED2C10C2F8F0B2DCE468C87EF3064E854A8D,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[200] = 
{
	6169,
	6169,
	6334,
	6334,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	6085,
	-1,
	6085,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[65] = 
{
	{ 0x02000004, { 103, 4 } },
	{ 0x02000005, { 107, 9 } },
	{ 0x02000006, { 118, 7 } },
	{ 0x02000007, { 127, 10 } },
	{ 0x02000008, { 139, 11 } },
	{ 0x02000009, { 153, 9 } },
	{ 0x0200000A, { 165, 12 } },
	{ 0x0200000B, { 180, 1 } },
	{ 0x0200000C, { 181, 2 } },
	{ 0x0200000D, { 183, 12 } },
	{ 0x0200000E, { 195, 11 } },
	{ 0x0200000F, { 206, 11 } },
	{ 0x02000010, { 217, 6 } },
	{ 0x02000011, { 223, 6 } },
	{ 0x02000013, { 229, 8 } },
	{ 0x02000015, { 237, 3 } },
	{ 0x02000016, { 242, 5 } },
	{ 0x02000017, { 247, 7 } },
	{ 0x02000018, { 254, 3 } },
	{ 0x02000019, { 257, 7 } },
	{ 0x0200001A, { 264, 4 } },
	{ 0x0200001B, { 268, 36 } },
	{ 0x0200001D, { 304, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 2 } },
	{ 0x0600000C, { 35, 1 } },
	{ 0x0600000D, { 36, 1 } },
	{ 0x0600000E, { 37, 2 } },
	{ 0x0600000F, { 39, 1 } },
	{ 0x06000010, { 40, 2 } },
	{ 0x06000011, { 42, 1 } },
	{ 0x06000012, { 43, 2 } },
	{ 0x06000013, { 45, 1 } },
	{ 0x06000014, { 46, 5 } },
	{ 0x06000015, { 51, 3 } },
	{ 0x06000016, { 54, 2 } },
	{ 0x06000017, { 56, 2 } },
	{ 0x06000018, { 58, 2 } },
	{ 0x06000019, { 60, 4 } },
	{ 0x0600001A, { 64, 4 } },
	{ 0x0600001B, { 68, 3 } },
	{ 0x0600001C, { 71, 4 } },
	{ 0x0600001D, { 75, 4 } },
	{ 0x0600001E, { 79, 3 } },
	{ 0x0600001F, { 82, 3 } },
	{ 0x06000020, { 85, 1 } },
	{ 0x06000021, { 86, 3 } },
	{ 0x06000022, { 89, 2 } },
	{ 0x06000023, { 91, 3 } },
	{ 0x06000024, { 94, 2 } },
	{ 0x06000025, { 96, 5 } },
	{ 0x06000027, { 101, 1 } },
	{ 0x06000029, { 102, 1 } },
	{ 0x06000039, { 116, 2 } },
	{ 0x0600003E, { 125, 2 } },
	{ 0x06000043, { 137, 2 } },
	{ 0x06000049, { 150, 3 } },
	{ 0x0600004E, { 162, 3 } },
	{ 0x06000053, { 177, 3 } },
	{ 0x0600008F, { 240, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[306] = 
{
	{ (Il2CppRGCTXDataType)2, 2686 },
	{ (Il2CppRGCTXDataType)3, 12285 },
	{ (Il2CppRGCTXDataType)2, 4557 },
	{ (Il2CppRGCTXDataType)2, 3975 },
	{ (Il2CppRGCTXDataType)3, 25080 },
	{ (Il2CppRGCTXDataType)2, 2834 },
	{ (Il2CppRGCTXDataType)2, 3982 },
	{ (Il2CppRGCTXDataType)3, 25188 },
	{ (Il2CppRGCTXDataType)2, 3977 },
	{ (Il2CppRGCTXDataType)3, 25113 },
	{ (Il2CppRGCTXDataType)2, 2687 },
	{ (Il2CppRGCTXDataType)3, 12286 },
	{ (Il2CppRGCTXDataType)2, 4586 },
	{ (Il2CppRGCTXDataType)2, 3984 },
	{ (Il2CppRGCTXDataType)3, 25221 },
	{ (Il2CppRGCTXDataType)2, 2858 },
	{ (Il2CppRGCTXDataType)2, 3992 },
	{ (Il2CppRGCTXDataType)3, 25648 },
	{ (Il2CppRGCTXDataType)2, 3988 },
	{ (Il2CppRGCTXDataType)3, 25416 },
	{ (Il2CppRGCTXDataType)2, 885 },
	{ (Il2CppRGCTXDataType)3, 79 },
	{ (Il2CppRGCTXDataType)3, 80 },
	{ (Il2CppRGCTXDataType)2, 1656 },
	{ (Il2CppRGCTXDataType)3, 9513 },
	{ (Il2CppRGCTXDataType)2, 886 },
	{ (Il2CppRGCTXDataType)3, 103 },
	{ (Il2CppRGCTXDataType)3, 104 },
	{ (Il2CppRGCTXDataType)2, 1671 },
	{ (Il2CppRGCTXDataType)3, 9519 },
	{ (Il2CppRGCTXDataType)3, 29455 },
	{ (Il2CppRGCTXDataType)2, 900 },
	{ (Il2CppRGCTXDataType)3, 358 },
	{ (Il2CppRGCTXDataType)2, 3519 },
	{ (Il2CppRGCTXDataType)3, 20186 },
	{ (Il2CppRGCTXDataType)3, 10549 },
	{ (Il2CppRGCTXDataType)3, 29360 },
	{ (Il2CppRGCTXDataType)2, 889 },
	{ (Il2CppRGCTXDataType)3, 246 },
	{ (Il2CppRGCTXDataType)3, 29370 },
	{ (Il2CppRGCTXDataType)2, 893 },
	{ (Il2CppRGCTXDataType)3, 298 },
	{ (Il2CppRGCTXDataType)3, 29404 },
	{ (Il2CppRGCTXDataType)2, 898 },
	{ (Il2CppRGCTXDataType)3, 339 },
	{ (Il2CppRGCTXDataType)3, 29466 },
	{ (Il2CppRGCTXDataType)3, 8572 },
	{ (Il2CppRGCTXDataType)2, 1523 },
	{ (Il2CppRGCTXDataType)2, 2049 },
	{ (Il2CppRGCTXDataType)2, 2187 },
	{ (Il2CppRGCTXDataType)2, 2293 },
	{ (Il2CppRGCTXDataType)2, 1137 },
	{ (Il2CppRGCTXDataType)3, 2387 },
	{ (Il2CppRGCTXDataType)3, 2388 },
	{ (Il2CppRGCTXDataType)2, 2835 },
	{ (Il2CppRGCTXDataType)3, 13363 },
	{ (Il2CppRGCTXDataType)2, 2050 },
	{ (Il2CppRGCTXDataType)3, 29247 },
	{ (Il2CppRGCTXDataType)2, 887 },
	{ (Il2CppRGCTXDataType)3, 223 },
	{ (Il2CppRGCTXDataType)2, 2557 },
	{ (Il2CppRGCTXDataType)2, 1919 },
	{ (Il2CppRGCTXDataType)2, 2065 },
	{ (Il2CppRGCTXDataType)2, 2190 },
	{ (Il2CppRGCTXDataType)2, 2558 },
	{ (Il2CppRGCTXDataType)2, 1920 },
	{ (Il2CppRGCTXDataType)2, 2066 },
	{ (Il2CppRGCTXDataType)2, 2191 },
	{ (Il2CppRGCTXDataType)2, 2067 },
	{ (Il2CppRGCTXDataType)2, 2192 },
	{ (Il2CppRGCTXDataType)3, 9515 },
	{ (Il2CppRGCTXDataType)2, 2559 },
	{ (Il2CppRGCTXDataType)2, 1921 },
	{ (Il2CppRGCTXDataType)2, 2068 },
	{ (Il2CppRGCTXDataType)2, 2193 },
	{ (Il2CppRGCTXDataType)2, 2560 },
	{ (Il2CppRGCTXDataType)2, 1922 },
	{ (Il2CppRGCTXDataType)2, 2069 },
	{ (Il2CppRGCTXDataType)2, 2194 },
	{ (Il2CppRGCTXDataType)2, 2070 },
	{ (Il2CppRGCTXDataType)2, 2195 },
	{ (Il2CppRGCTXDataType)3, 9516 },
	{ (Il2CppRGCTXDataType)2, 2556 },
	{ (Il2CppRGCTXDataType)2, 2064 },
	{ (Il2CppRGCTXDataType)2, 2189 },
	{ (Il2CppRGCTXDataType)2, 2044 },
	{ (Il2CppRGCTXDataType)2, 2045 },
	{ (Il2CppRGCTXDataType)2, 2185 },
	{ (Il2CppRGCTXDataType)3, 9512 },
	{ (Il2CppRGCTXDataType)2, 1918 },
	{ (Il2CppRGCTXDataType)2, 2060 },
	{ (Il2CppRGCTXDataType)2, 2061 },
	{ (Il2CppRGCTXDataType)2, 2188 },
	{ (Il2CppRGCTXDataType)3, 9514 },
	{ (Il2CppRGCTXDataType)2, 1917 },
	{ (Il2CppRGCTXDataType)3, 29332 },
	{ (Il2CppRGCTXDataType)3, 8571 },
	{ (Il2CppRGCTXDataType)2, 1522 },
	{ (Il2CppRGCTXDataType)2, 2047 },
	{ (Il2CppRGCTXDataType)2, 2186 },
	{ (Il2CppRGCTXDataType)2, 2292 },
	{ (Il2CppRGCTXDataType)3, 29409 },
	{ (Il2CppRGCTXDataType)3, 29408 },
	{ (Il2CppRGCTXDataType)3, 12287 },
	{ (Il2CppRGCTXDataType)3, 12289 },
	{ (Il2CppRGCTXDataType)2, 604 },
	{ (Il2CppRGCTXDataType)3, 12288 },
	{ (Il2CppRGCTXDataType)3, 12297 },
	{ (Il2CppRGCTXDataType)2, 2690 },
	{ (Il2CppRGCTXDataType)2, 3978 },
	{ (Il2CppRGCTXDataType)3, 25114 },
	{ (Il2CppRGCTXDataType)3, 12298 },
	{ (Il2CppRGCTXDataType)2, 2122 },
	{ (Il2CppRGCTXDataType)2, 2225 },
	{ (Il2CppRGCTXDataType)3, 9527 },
	{ (Il2CppRGCTXDataType)3, 29251 },
	{ (Il2CppRGCTXDataType)2, 3989 },
	{ (Il2CppRGCTXDataType)3, 25417 },
	{ (Il2CppRGCTXDataType)3, 12290 },
	{ (Il2CppRGCTXDataType)2, 2689 },
	{ (Il2CppRGCTXDataType)2, 3976 },
	{ (Il2CppRGCTXDataType)3, 25081 },
	{ (Il2CppRGCTXDataType)3, 9526 },
	{ (Il2CppRGCTXDataType)3, 12291 },
	{ (Il2CppRGCTXDataType)3, 29250 },
	{ (Il2CppRGCTXDataType)2, 3985 },
	{ (Il2CppRGCTXDataType)3, 25222 },
	{ (Il2CppRGCTXDataType)3, 12304 },
	{ (Il2CppRGCTXDataType)2, 2691 },
	{ (Il2CppRGCTXDataType)2, 3983 },
	{ (Il2CppRGCTXDataType)3, 25189 },
	{ (Il2CppRGCTXDataType)3, 13426 },
	{ (Il2CppRGCTXDataType)3, 6744 },
	{ (Il2CppRGCTXDataType)3, 9528 },
	{ (Il2CppRGCTXDataType)3, 6743 },
	{ (Il2CppRGCTXDataType)3, 12305 },
	{ (Il2CppRGCTXDataType)3, 29252 },
	{ (Il2CppRGCTXDataType)2, 3993 },
	{ (Il2CppRGCTXDataType)3, 25649 },
	{ (Il2CppRGCTXDataType)3, 12318 },
	{ (Il2CppRGCTXDataType)2, 2693 },
	{ (Il2CppRGCTXDataType)2, 3991 },
	{ (Il2CppRGCTXDataType)3, 25419 },
	{ (Il2CppRGCTXDataType)3, 12319 },
	{ (Il2CppRGCTXDataType)2, 2125 },
	{ (Il2CppRGCTXDataType)2, 2228 },
	{ (Il2CppRGCTXDataType)3, 9532 },
	{ (Il2CppRGCTXDataType)3, 9531 },
	{ (Il2CppRGCTXDataType)2, 3980 },
	{ (Il2CppRGCTXDataType)3, 25116 },
	{ (Il2CppRGCTXDataType)3, 29265 },
	{ (Il2CppRGCTXDataType)2, 3990 },
	{ (Il2CppRGCTXDataType)3, 25418 },
	{ (Il2CppRGCTXDataType)3, 12311 },
	{ (Il2CppRGCTXDataType)2, 2692 },
	{ (Il2CppRGCTXDataType)2, 3987 },
	{ (Il2CppRGCTXDataType)3, 25224 },
	{ (Il2CppRGCTXDataType)3, 9530 },
	{ (Il2CppRGCTXDataType)3, 9529 },
	{ (Il2CppRGCTXDataType)3, 12312 },
	{ (Il2CppRGCTXDataType)2, 3979 },
	{ (Il2CppRGCTXDataType)3, 25115 },
	{ (Il2CppRGCTXDataType)3, 29264 },
	{ (Il2CppRGCTXDataType)2, 3986 },
	{ (Il2CppRGCTXDataType)3, 25223 },
	{ (Il2CppRGCTXDataType)3, 12325 },
	{ (Il2CppRGCTXDataType)2, 2694 },
	{ (Il2CppRGCTXDataType)2, 3995 },
	{ (Il2CppRGCTXDataType)3, 25651 },
	{ (Il2CppRGCTXDataType)3, 13427 },
	{ (Il2CppRGCTXDataType)3, 6746 },
	{ (Il2CppRGCTXDataType)3, 9534 },
	{ (Il2CppRGCTXDataType)3, 9533 },
	{ (Il2CppRGCTXDataType)3, 6745 },
	{ (Il2CppRGCTXDataType)3, 12326 },
	{ (Il2CppRGCTXDataType)2, 3981 },
	{ (Il2CppRGCTXDataType)3, 25117 },
	{ (Il2CppRGCTXDataType)3, 29266 },
	{ (Il2CppRGCTXDataType)2, 3994 },
	{ (Il2CppRGCTXDataType)3, 25650 },
	{ (Il2CppRGCTXDataType)3, 9523 },
	{ (Il2CppRGCTXDataType)3, 9524 },
	{ (Il2CppRGCTXDataType)3, 9535 },
	{ (Il2CppRGCTXDataType)3, 361 },
	{ (Il2CppRGCTXDataType)3, 360 },
	{ (Il2CppRGCTXDataType)2, 2117 },
	{ (Il2CppRGCTXDataType)2, 2221 },
	{ (Il2CppRGCTXDataType)3, 9525 },
	{ (Il2CppRGCTXDataType)2, 2132 },
	{ (Il2CppRGCTXDataType)2, 2241 },
	{ (Il2CppRGCTXDataType)3, 363 },
	{ (Il2CppRGCTXDataType)2, 789 },
	{ (Il2CppRGCTXDataType)2, 901 },
	{ (Il2CppRGCTXDataType)3, 359 },
	{ (Il2CppRGCTXDataType)3, 362 },
	{ (Il2CppRGCTXDataType)3, 248 },
	{ (Il2CppRGCTXDataType)2, 3654 },
	{ (Il2CppRGCTXDataType)3, 22888 },
	{ (Il2CppRGCTXDataType)2, 2108 },
	{ (Il2CppRGCTXDataType)2, 2216 },
	{ (Il2CppRGCTXDataType)3, 22889 },
	{ (Il2CppRGCTXDataType)3, 250 },
	{ (Il2CppRGCTXDataType)2, 597 },
	{ (Il2CppRGCTXDataType)2, 890 },
	{ (Il2CppRGCTXDataType)3, 247 },
	{ (Il2CppRGCTXDataType)3, 249 },
	{ (Il2CppRGCTXDataType)3, 300 },
	{ (Il2CppRGCTXDataType)2, 3656 },
	{ (Il2CppRGCTXDataType)3, 22890 },
	{ (Il2CppRGCTXDataType)2, 2111 },
	{ (Il2CppRGCTXDataType)2, 2218 },
	{ (Il2CppRGCTXDataType)3, 22891 },
	{ (Il2CppRGCTXDataType)3, 302 },
	{ (Il2CppRGCTXDataType)2, 599 },
	{ (Il2CppRGCTXDataType)2, 894 },
	{ (Il2CppRGCTXDataType)3, 299 },
	{ (Il2CppRGCTXDataType)3, 301 },
	{ (Il2CppRGCTXDataType)2, 1138 },
	{ (Il2CppRGCTXDataType)3, 2389 },
	{ (Il2CppRGCTXDataType)2, 601 },
	{ (Il2CppRGCTXDataType)2, 899 },
	{ (Il2CppRGCTXDataType)3, 340 },
	{ (Il2CppRGCTXDataType)3, 341 },
	{ (Il2CppRGCTXDataType)3, 225 },
	{ (Il2CppRGCTXDataType)2, 595 },
	{ (Il2CppRGCTXDataType)3, 227 },
	{ (Il2CppRGCTXDataType)2, 888 },
	{ (Il2CppRGCTXDataType)3, 224 },
	{ (Il2CppRGCTXDataType)3, 226 },
	{ (Il2CppRGCTXDataType)3, 8605 },
	{ (Il2CppRGCTXDataType)2, 1537 },
	{ (Il2CppRGCTXDataType)2, 4690 },
	{ (Il2CppRGCTXDataType)3, 22885 },
	{ (Il2CppRGCTXDataType)3, 22886 },
	{ (Il2CppRGCTXDataType)2, 2308 },
	{ (Il2CppRGCTXDataType)3, 22887 },
	{ (Il2CppRGCTXDataType)2, 512 },
	{ (Il2CppRGCTXDataType)2, 895 },
	{ (Il2CppRGCTXDataType)3, 312 },
	{ (Il2CppRGCTXDataType)3, 20173 },
	{ (Il2CppRGCTXDataType)2, 3520 },
	{ (Il2CppRGCTXDataType)3, 20187 },
	{ (Il2CppRGCTXDataType)2, 1140 },
	{ (Il2CppRGCTXDataType)3, 2390 },
	{ (Il2CppRGCTXDataType)3, 20179 },
	{ (Il2CppRGCTXDataType)3, 6713 },
	{ (Il2CppRGCTXDataType)2, 639 },
	{ (Il2CppRGCTXDataType)3, 20174 },
	{ (Il2CppRGCTXDataType)2, 3516 },
	{ (Il2CppRGCTXDataType)3, 2439 },
	{ (Il2CppRGCTXDataType)2, 1156 },
	{ (Il2CppRGCTXDataType)2, 1484 },
	{ (Il2CppRGCTXDataType)3, 6719 },
	{ (Il2CppRGCTXDataType)3, 20175 },
	{ (Il2CppRGCTXDataType)3, 6708 },
	{ (Il2CppRGCTXDataType)3, 6709 },
	{ (Il2CppRGCTXDataType)3, 6707 },
	{ (Il2CppRGCTXDataType)3, 6710 },
	{ (Il2CppRGCTXDataType)2, 1480 },
	{ (Il2CppRGCTXDataType)2, 4645 },
	{ (Il2CppRGCTXDataType)3, 9521 },
	{ (Il2CppRGCTXDataType)3, 6712 },
	{ (Il2CppRGCTXDataType)2, 2024 },
	{ (Il2CppRGCTXDataType)3, 6711 },
	{ (Il2CppRGCTXDataType)2, 1924 },
	{ (Il2CppRGCTXDataType)2, 4589 },
	{ (Il2CppRGCTXDataType)2, 2084 },
	{ (Il2CppRGCTXDataType)2, 2196 },
	{ (Il2CppRGCTXDataType)3, 8588 },
	{ (Il2CppRGCTXDataType)2, 1531 },
	{ (Il2CppRGCTXDataType)3, 10201 },
	{ (Il2CppRGCTXDataType)3, 10202 },
	{ (Il2CppRGCTXDataType)2, 1870 },
	{ (Il2CppRGCTXDataType)3, 10205 },
	{ (Il2CppRGCTXDataType)2, 1870 },
	{ (Il2CppRGCTXDataType)3, 10207 },
	{ (Il2CppRGCTXDataType)2, 1925 },
	{ (Il2CppRGCTXDataType)3, 10211 },
	{ (Il2CppRGCTXDataType)3, 10216 },
	{ (Il2CppRGCTXDataType)3, 10215 },
	{ (Il2CppRGCTXDataType)2, 4688 },
	{ (Il2CppRGCTXDataType)3, 10204 },
	{ (Il2CppRGCTXDataType)3, 10203 },
	{ (Il2CppRGCTXDataType)3, 10212 },
	{ (Il2CppRGCTXDataType)2, 2303 },
	{ (Il2CppRGCTXDataType)3, 10209 },
	{ (Il2CppRGCTXDataType)3, 30064 },
	{ (Il2CppRGCTXDataType)2, 1488 },
	{ (Il2CppRGCTXDataType)3, 6735 },
	{ (Il2CppRGCTXDataType)1, 2019 },
	{ (Il2CppRGCTXDataType)2, 4599 },
	{ (Il2CppRGCTXDataType)3, 10208 },
	{ (Il2CppRGCTXDataType)1, 4599 },
	{ (Il2CppRGCTXDataType)1, 2303 },
	{ (Il2CppRGCTXDataType)2, 4688 },
	{ (Il2CppRGCTXDataType)2, 4599 },
	{ (Il2CppRGCTXDataType)2, 2087 },
	{ (Il2CppRGCTXDataType)2, 2199 },
	{ (Il2CppRGCTXDataType)3, 10206 },
	{ (Il2CppRGCTXDataType)3, 10213 },
	{ (Il2CppRGCTXDataType)3, 10214 },
	{ (Il2CppRGCTXDataType)3, 10210 },
	{ (Il2CppRGCTXDataType)3, 10217 },
	{ (Il2CppRGCTXDataType)2, 427 },
	{ (Il2CppRGCTXDataType)3, 6747 },
	{ (Il2CppRGCTXDataType)2, 616 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	200,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	65,
	s_rgctxIndices,
	306,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
