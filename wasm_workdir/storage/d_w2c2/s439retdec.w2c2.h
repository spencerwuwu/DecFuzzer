#ifndef s439retdec_H
#define s439retdec_H

#include "w2c2_base.h"

typedef struct s439retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s439retdecInstance;

void f0(s439retdecInstance*);

void f1(s439retdecInstance*);

U32 f2(s439retdecInstance*);

void f3(s439retdecInstance*,U32);

U32 f4(s439retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s439retdecInstance*,U32,U32,U32,U32,U32);

void f6(s439retdecInstance*,U32);

void f7(s439retdecInstance*,U32,U32,U32);

void f8(s439retdecInstance*,U32,U32,U32);

void s439retdec____wasm_call_ctors(s439retdecInstance*i);

void s439retdec____wasm_apply_data_relocs(s439retdecInstance*i);

U32 s439retdec_func_1(s439retdecInstance*i);

void s439retdec_call_cb(s439retdecInstance*i,U32 l0);

void s439retdecInstantiate(s439retdecInstance* instance, void* resolve(const char* module, const char* name));

void s439retdecFreeInstance(s439retdecInstance* instance);

#endif /* s439retdec_H */

