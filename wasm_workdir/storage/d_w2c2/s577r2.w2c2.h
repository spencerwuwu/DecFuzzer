#ifndef s577r2_H
#define s577r2_H

#include "w2c2_base.h"

typedef struct s577r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s577r2Instance;

void f0(s577r2Instance*);

void f1(s577r2Instance*);

U32 f2(s577r2Instance*);

void f3(s577r2Instance*,U32);

U32 f4(s577r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s577r2Instance*,U32,U32,U32,U32,U32);

void f6(s577r2Instance*,U32);

void f7(s577r2Instance*,U32,U32,U32);

void f8(s577r2Instance*,U32,U32,U32);

void s577r2____wasm_call_ctors(s577r2Instance*i);

void s577r2____wasm_apply_data_relocs(s577r2Instance*i);

U32 s577r2_func_1(s577r2Instance*i);

void s577r2_call_cb(s577r2Instance*i,U32 l0);

void s577r2Instantiate(s577r2Instance* instance, void* resolve(const char* module, const char* name));

void s577r2FreeInstance(s577r2Instance* instance);

#endif /* s577r2_H */

