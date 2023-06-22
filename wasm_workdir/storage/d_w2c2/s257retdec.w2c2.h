#ifndef s257retdec_H
#define s257retdec_H

#include "w2c2_base.h"

typedef struct s257retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s257retdecInstance;

void f0(s257retdecInstance*);

void f1(s257retdecInstance*);

U32 f2(s257retdecInstance*);

void f3(s257retdecInstance*,U32);

U32 f4(s257retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s257retdecInstance*,U32,U32,U32,U32,U32);

void f6(s257retdecInstance*,U32);

void f7(s257retdecInstance*,U32,U32,U32);

void f8(s257retdecInstance*,U32,U32,U32);

void s257retdec____wasm_call_ctors(s257retdecInstance*i);

void s257retdec____wasm_apply_data_relocs(s257retdecInstance*i);

U32 s257retdec_func_1(s257retdecInstance*i);

void s257retdec_call_cb(s257retdecInstance*i,U32 l0);

void s257retdecInstantiate(s257retdecInstance* instance, void* resolve(const char* module, const char* name));

void s257retdecFreeInstance(s257retdecInstance* instance);

#endif /* s257retdec_H */

