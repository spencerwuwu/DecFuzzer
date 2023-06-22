#ifndef s633retdec_H
#define s633retdec_H

#include "w2c2_base.h"

typedef struct s633retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s633retdecInstance;

void f0(s633retdecInstance*);

void f1(s633retdecInstance*);

U32 f2(s633retdecInstance*);

void f3(s633retdecInstance*,U32);

U32 f4(s633retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s633retdecInstance*,U32,U32,U32,U32,U32);

void f6(s633retdecInstance*,U32);

void f7(s633retdecInstance*,U32,U32,U32);

void f8(s633retdecInstance*,U32,U32,U32);

void s633retdec____wasm_call_ctors(s633retdecInstance*i);

void s633retdec____wasm_apply_data_relocs(s633retdecInstance*i);

U32 s633retdec_func_1(s633retdecInstance*i);

void s633retdec_call_cb(s633retdecInstance*i,U32 l0);

void s633retdecInstantiate(s633retdecInstance* instance, void* resolve(const char* module, const char* name));

void s633retdecFreeInstance(s633retdecInstance* instance);

#endif /* s633retdec_H */

