#ifndef s944retdec_H
#define s944retdec_H

#include "w2c2_base.h"

typedef struct s944retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s944retdecInstance;

void f0(s944retdecInstance*);

void f1(s944retdecInstance*);

U32 f2(s944retdecInstance*);

void f3(s944retdecInstance*,U32);

U32 f4(s944retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s944retdecInstance*,U32,U32,U32,U32,U32);

void f6(s944retdecInstance*,U32);

void f7(s944retdecInstance*,U32,U32,U32);

void f8(s944retdecInstance*,U32,U32,U32);

void s944retdec____wasm_call_ctors(s944retdecInstance*i);

void s944retdec____wasm_apply_data_relocs(s944retdecInstance*i);

U32 s944retdec_func_1(s944retdecInstance*i);

void s944retdec_call_cb(s944retdecInstance*i,U32 l0);

void s944retdecInstantiate(s944retdecInstance* instance, void* resolve(const char* module, const char* name));

void s944retdecFreeInstance(s944retdecInstance* instance);

#endif /* s944retdec_H */

