#ifndef s291retdec_H
#define s291retdec_H

#include "w2c2_base.h"

typedef struct s291retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s291retdecInstance;

void f0(s291retdecInstance*);

void f1(s291retdecInstance*);

U32 f2(s291retdecInstance*);

void f3(s291retdecInstance*,U32);

U32 f4(s291retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s291retdecInstance*,U32,U32,U32,U32,U32);

void f6(s291retdecInstance*,U32);

void f7(s291retdecInstance*,U32,U32,U32);

void f8(s291retdecInstance*,U32,U32,U32);

void s291retdec____wasm_call_ctors(s291retdecInstance*i);

void s291retdec____wasm_apply_data_relocs(s291retdecInstance*i);

U32 s291retdec_func_1(s291retdecInstance*i);

void s291retdec_call_cb(s291retdecInstance*i,U32 l0);

void s291retdecInstantiate(s291retdecInstance* instance, void* resolve(const char* module, const char* name));

void s291retdecFreeInstance(s291retdecInstance* instance);

#endif /* s291retdec_H */

